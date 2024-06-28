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
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 break;
 }
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 memmove(VAR2, VAR4, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR3'';
 FUN3(VAR2);
 free(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 break;
 default:
 FUN2("");
 break;
 }
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 memmove(VAR2, VAR4, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR3'';
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
