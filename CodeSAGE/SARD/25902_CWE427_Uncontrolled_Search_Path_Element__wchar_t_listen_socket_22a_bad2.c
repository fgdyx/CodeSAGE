#ifndef VAR1
int VAR2 = 0;
wchar_t * FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t VAR4[250] = VAR5"";
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN3(VAR3);
}
#endif
