#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 {
 wchar_t * VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 break;
 }
 FUN2(VAR2);
 delete [] VAR2;
}
void FUN3()
{
 FUN1();
}
#endif
