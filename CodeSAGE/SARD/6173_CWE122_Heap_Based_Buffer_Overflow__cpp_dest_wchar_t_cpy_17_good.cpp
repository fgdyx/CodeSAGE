#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = new wchar_t[100];
 VAR3[0] = VAR4'';
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 wcscpy(VAR3, VAR5);
 FUN2(VAR3);
 delete [] VAR3;
 }
}
void FUN3()
{
 FUN1();
}
#endif
