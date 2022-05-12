#include "zlib.h"
#include <stdio.h>

int main()
{
    unsigned char strSrc[] = "hello world!";
    unsigned char buf[1024] = {0};
    //unsigned char strDst[1024] = {0};
    unsigned long srcLen = sizeof(strSrc);
    unsigned long bufLen = sizeof(buf);
    //unsigned long dstLen = sizeof(strDst);

    printf("Src string:%s\nLength:%ld\n", strSrc, srcLen);

    compress(buf, &bufLen, strSrc, srcLen);
    printf("After Compressed Length: %ld\n", bufLen);
}
