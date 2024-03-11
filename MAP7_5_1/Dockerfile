FROM ubuntu:16.04
	LABEL maintainer="garpinich22@mail.ru"
	RUN apt-get update && apt-get install -y g++ nano net-tools
	WORKDIR /root/MAP7_5_1
	COPY dockerHelloWorld.cpp .
	RUN g++ dockerHelloWorld.cpp -o dockerHelloWorld
	CMD ["./dockerHelloWorld"]
