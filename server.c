#include <stdio.h>
#include "square.h"
#include <pthread.h>
square_out * squareproc_1_svc(square_in *inp,struct svc_req *rqstp)
{
    static square_out out;

    printf("thread %ld start,arg = %ld\n",pthread_self(),inp->arg1);

    sleep(5);
    out.res1 = inp->arg1*inp->arg1;

    printf("thread %ld done\n",pthread_self());

    return (&out);
}
