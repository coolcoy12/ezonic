#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc > 1)
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
                printf("Usage: ezonic [options]\n");

                printf(" -v / --version      -     Display ezonic version information.\n");
                printf(" -h / --help         -     Display this help page.\n");

                return 0;
            }
        }
    }
}