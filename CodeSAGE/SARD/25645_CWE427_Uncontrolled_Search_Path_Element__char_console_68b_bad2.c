#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN2(VAR2);
}
#endif
