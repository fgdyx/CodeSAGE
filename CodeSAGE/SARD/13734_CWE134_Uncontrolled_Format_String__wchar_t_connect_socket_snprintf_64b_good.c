#ifndef VAR1
void FUN1(void * VAR2)
{
 wchar_t * * VAR3 = (wchar_t * *)VAR2;
 wchar_t * VAR4 = (*VAR3);
 {
 wchar_t VAR5[100] = VAR6"";
 FUN2(VAR5, 100-1, VAR4);
 FUN3(VAR5);
 }
}
void FUN4(void * VAR2)
{
 wchar_t * * VAR3 = (wchar_t * *)VAR2;
 wchar_t * VAR4 = (*VAR3);
 {
 wchar_t VAR5[100] = VAR6"";
 FUN2(VAR5, 100-1, VAR6"", VAR4);
 FUN3(VAR5);
 }
}
#endif
