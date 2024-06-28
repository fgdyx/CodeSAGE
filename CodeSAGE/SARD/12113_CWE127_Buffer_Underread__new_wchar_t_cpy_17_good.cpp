#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 wchar_t * VAR4 = new wchar_t[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR3 = VAR4;
 }
 }
 {
 wchar_t VAR6[100*2];
 wmemset(VAR6, VAR5'', 100*2-1);
 VAR6[100*2-1] = VAR5'';
 wcscpy(VAR6, VAR3);
 FUN2(VAR6);
 }
}
void FUN3()
{
 FUN1();
}
#endif
