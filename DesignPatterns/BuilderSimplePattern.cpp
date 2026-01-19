#include<bits/stdc++.h>
using namespace std;

class HttpRequest {    // when client wants an object of http it cannot directly access this 
    string url;         // so we will private constructer and make a friend func..
    string method;
    map<string,string> headers;
    map<string,string> queryParams;
    string body;
    int timeout;

    HttpRequest(){}
public:
    friend class HttpRequestBuilder;

    void execute() {
        cout << "Executing " << method << " request to " << url << endl;
        
        if (!queryParams.empty()) {
            cout << "Query Parameters:" << endl;
            for (const auto& param : queryParams) {
                cout << "  " << param.first << "=" << param.second << endl;
            }
        }

        cout << "Headers:" << endl;
        for (const auto& header : headers) {
            cout << "  " << header.first << ": " << header.second << endl;
        }
        
        if (!body.empty()) {
            cout << "Body: " << body << endl;
        }
        
        cout << "Timeout: " << timeout << " seconds" << endl;
        cout << "Request executed successfully!" << endl;
    }
};

class HttpRequestBuilder{
    HttpRequest req;

public:
    // method chaining 
    HttpRequestBuilder& withUrl(const string& u){
        req.url = u;
        return *this;
    }
    HttpRequestBuilder& withMethod(string method) {
        req.method = method;
        return *this;
    }
    
    HttpRequestBuilder& withHeader(const string& key, const string& value) {
        req.headers[key] = value;
        return *this;
    }

    HttpRequestBuilder& withQueryParams(const string& key, const string& value) {
        req.queryParams[key] = value;
        return *this;
    }
    
    HttpRequestBuilder& withBody(const string& body) {
        req.body = body;
        return *this;
    }
    
    HttpRequestBuilder& withTimeout(int timeout) {
        req.timeout = timeout;
        return *this;
    }
    
    // Build method to create the immutable HttpRequest object
    HttpRequest build() {
        // Validation logic can be added here
        if (req.url.empty()) {
            throw runtime_error("URL cannot be empty");
        }
        if(req.body.empty()){
            throw runtime_error("Body is empty");
        }
        return req;
    }
};

int main(){
    // Using Builder Pattern (nested class)
    HttpRequest request = HttpRequestBuilder()
        .withUrl("https://api.example.com")
        .withMethod("POST")
        .withHeader("Content-Type", "application/json")
        .withHeader("Accept", "application/json")
        .withQueryParams("key", "12345")
        .withBody("{\"name\": \"Aditya\"}")
        .withTimeout(60)
        .build();


    // what is happening here => 
    //

    request.execute(); // Guaranteed to be in a consistent state
}




/*
without builder pattern - we were creating multiple constructors (telescoping constructor problem)
and using setters cause (mutable object problem).



#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class HttpRequest {
private:
    string url;                     // required
    string method;                  // required
    map<string, string> headers;
    map<string,string> queryParams;
    string body;
    int timeout;                    // required
    
public:
    // Constructor with only required parameter (1-arg)
    HttpRequest(const string& url) {
        this->url = url;
        this->method = "GET";       // Default method
        this->timeout = 30;         // Default timeout
    }
    
    // 2 - args
    HttpRequest(const string& url, string method) {
        this->url = url;
        this->method = method;
        this->timeout = 30;
    }
    
    // 3 - args
    HttpRequest(const string& url, string method, int timeout) {
        this->url = url;
        this->method = method;
        this->timeout = timeout;
    }
    
    // 4 - args
    HttpRequest(const string& url, string method, int timeout, map<string, string> headers) {
        this->url = url;
        this->method = method;
        this->timeout = timeout;
        this->headers = headers;
    }

    // 5 - args
    HttpRequest(const string& url, string method, int timeout, 
        map<string, string> headers, map<string,string> queryParams) {
        this->url = url;
        this->method = method;
        this->timeout = timeout;
        this->headers = headers;
        this->queryParams = queryParams;
    }

    // 6 - args
    HttpRequest(const string& url, string method, int timeout, 
        map<string, string> headers, map<string,string> queryParams, string body) {
        this->url = url;
        this->method = method;
        this->timeout = timeout;
        this->headers = headers;
        this->queryParams = queryParams;
        this->body = body;
    }
    
    // Setters (leads to mutable object)
    void setUrl(const string& url) {
        this->url = url;
    }
    
    void setMethod(string method) {
        this->method = method;
    }
    
    void addHeader(const string& key, const string& value) {
        headers[key] = value;
    }

    void addQueryParam(const string& key, const string& value) {
        queryParams[key] = value;
    }
    
    void setBody(const string& body) {
        this->body = body;
    }
    
    void setTimeout(int timeout) {
        this->timeout = timeout;
    }
    
    // Method to execute the HTTP request
    void execute() {
        cout << "Executing " << method << " request to " << url << endl;
        
        if (!queryParams.empty()) {
            cout << "Query Parameters:" << endl;
            for (const auto& param : queryParams) {
                cout << "  " << param.first << "=" << param.second << endl;
            }
        }

        cout << "Headers:" << endl;
        for (const auto& header : headers) {
            cout << "  " << header.first << ": " << header.second << endl;
        }
        
        if (!body.empty()) {
            cout << "Body: " << body << endl;
        }
        
        cout << "Timeout: " << timeout << " seconds" << endl;
        cout << "Request executed successfully!" << endl;
    }
};

int main() {
    // Using constructors (telescoping constructor problem)
    HttpRequest* request1 = new HttpRequest("https://api.example.com");
    HttpRequest* request2 = new HttpRequest("https://api.example.com", "POST");
    HttpRequest* request3 = new HttpRequest("https://api.example.com", "PUT", 60);
    
    // Using setters (mutable object problem)
    HttpRequest* request4 = new HttpRequest("https://api.example.com");
    request4->setMethod("POST");
    request4->addHeader("Content-Type", "application/json");
    request4->addQueryParam("key", "12345");


    request4->execute();  // Potentially incomplete request due to forgotten fields
    // this line will be executed without setting body and timeout


    request4->setBody("{\"name\": \"Aditya\"}");
    request4->setTimeout(60);
    
    // The problem: what if we forgot to set an important field?
    request4->execute();
}
*/