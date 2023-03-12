events {}

http {

    server {
        listen 80;

        location /proxypass {
            proxy_pass http://35.178.225.122;
        }

        location / {
            proxy_pass http://13.41.77.6;
        }

        location /backend {
            proxy_pass http://13.41.79.117:3000;
        }
    }  
}
