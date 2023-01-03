FROM kennethreitz/httpbin

ADD . /httpbin
RUN pip3 install --no-cache-dir --no-deps --upgrade --force-reinstall /httpbin
