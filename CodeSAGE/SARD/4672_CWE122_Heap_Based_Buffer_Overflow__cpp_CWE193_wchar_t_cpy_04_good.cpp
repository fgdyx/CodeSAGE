#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new wchar_t[10+1];
 }
 {
 wchar_t VAR4[10+1] = VAR5;
 wcscpy(VAR2, VAR4);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR6)
 {
 VAR2 = new wchar_t[10+1];
 }
 {
 wchar_t VAR4[10+1] = VAR5;
 wcscpy(VAR2, VAR4);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
