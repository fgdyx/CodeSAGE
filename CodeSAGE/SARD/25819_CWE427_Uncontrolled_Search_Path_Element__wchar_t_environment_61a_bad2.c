#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[250] = VAR4"";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN3(VAR2);
}
#endif
