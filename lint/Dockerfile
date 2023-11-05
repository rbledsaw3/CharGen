FROM jfloff/alpine-python:3.7-slim

RUN pip install pip==23.3.1
RUN pip install cpplint==1.6.1

COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]
