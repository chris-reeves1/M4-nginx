events {} 

http {
	server { 
		listen 80;
		location /hello { 
			return 200 "Hello World"; 
		}
		location /colour {
			return 200 "my fav colour is red";
		}
		location /food {
			return 200 "my fav food is pasta";
		} 
	} 
}
