#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[100];
 VAR2 = VAR5;
 wmemset(VAR2, VAR6'', 50-1);
 VAR2[50-1] = VAR6'';
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
