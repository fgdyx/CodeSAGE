#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN2(VAR3);
 }
 break;
 }
 while(1)
 {
 free(VAR2);
 break;
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new wchar_t[100];
 break;
 }
 while(1)
 {
 delete [] VAR2;
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
