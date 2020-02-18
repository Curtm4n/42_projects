FROM debian:buster

RUN apt-get update && apt-get install -y \
	nginx
#	mariadb-server mariadb-client -y
RUN echo "hello friend!" > hello.txt

COPY srcs/nginx/index.html /var/www/html/index.html
#COPY srcs/script/launch_commands.sh

#ENTRYPOINT ["bin/bash", "srcs/script/launch_commands.sh"]
ENTRYPOINT ["nginx", "-g", "daemon off;"]
EXPOSE 80 443
VOLUME /srcs

#CMD ["nginx", "-g", "daemon off;"]
