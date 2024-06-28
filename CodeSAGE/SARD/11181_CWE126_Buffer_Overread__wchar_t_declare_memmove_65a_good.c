#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[50];
 wchar_t VAR6[100];
 wmemset(VAR5, VAR7'', 50-1);
 VAR5[50-1] = VAR7'';
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
 VAR2 = VAR6;
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
