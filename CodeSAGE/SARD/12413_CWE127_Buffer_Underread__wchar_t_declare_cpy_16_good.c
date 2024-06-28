#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 while(1)
 {
 VAR2 = VAR3;
 break;
 }
 {
 wchar_t VAR5[100*2];
 wmemset(VAR5, VAR4'', 100*2-1);
 VAR5[100*2-1] = VAR4'';
 wcscpy(VAR5, VAR2);
 FUN2(VAR5);
 }
}
void FUN3()
{
 FUN1();
}
#endif
