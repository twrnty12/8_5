FROM ubuntu:latest
	LABEL maintainer="garpinich22@mail.ru"
	RUN apt-get update && apt-get install -y g++ nano cmake
	WORKDIR /root/MAP7_5_2/
	COPY src src
	WORKDIR /root/MAP7_5_2/build/
	COPY src/INI.ini .
	RUN cmake ../src
	RUN cmake --build .
	CMD ["./INI_Parser"]


