#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
wchar_t * FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 VAR4 = NULL;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
 }
 ;
}
wchar_t * FUN4(wchar_t * VAR4);
static void FUN5()
{
 wchar_t * VAR4;
 VAR4 = NULL;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
 }
 ;
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
