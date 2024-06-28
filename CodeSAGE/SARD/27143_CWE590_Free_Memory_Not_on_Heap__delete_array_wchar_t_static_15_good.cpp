#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 wchar_t * VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 break;
 }
 FUN3(VAR2);
 delete [] VAR2;
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 {
 wchar_t * VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 break;
 default:
 FUN2("");
 break;
 }
 FUN3(VAR2);
 delete [] VAR2;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
