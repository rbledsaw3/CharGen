FROM jfloff/alpine-python:3.7-slim

RUN pip install --upgrade pip
RUN pip install cpplint

ADD entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]
