#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 while(1)
 {
 VAR2[0] = VAR4'';
 break;
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 wcscat(VAR2, VAR5);
 FUN2(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
