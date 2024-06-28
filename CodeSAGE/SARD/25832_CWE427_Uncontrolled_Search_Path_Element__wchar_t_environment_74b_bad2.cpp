#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN2(VAR4);
}
#endif
