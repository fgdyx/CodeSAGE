#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN2(VAR2);
}
#endif
