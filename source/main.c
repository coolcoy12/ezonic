#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 1) return -1;
    else
    {
        int i;
        for(i = 1; i < argc; i++)
        {
            char *arg = argv[i];
            if(strcmp(arg, "-v") == 0 || strcmp(arg, "--version") == 0)
            {
                printf("ezonic 0.0.1-DEV\nCopyright (C) 2021 Fossbay\nThis is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n");
                return 0;
            }
            else if(strcmp(arg, "-h") == 0 || strcmp(arg, "--help") == 0)
            {
                printf("Usage: %s [options]\n", argv[0]);

                printf(" -v / --version      -     Display ezonic version information.\n");
                printf(" -h / --help         -     Display this help page.\n");
                printf(" -s / --server       -     Set server IP.\n");
                printf(" -pk/ --privatekey   -     Set your private key.\n");
                printf(" -pd/ --pubkeydir    -     Set directory with public keys.\n");

                return 0;
            }
        }
    }
    return 0;
}