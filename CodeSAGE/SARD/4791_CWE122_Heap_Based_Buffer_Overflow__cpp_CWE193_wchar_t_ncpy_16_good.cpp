#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new wchar_t[10+1];
 break;
 }
 {
 wchar_t VAR3[10+1] = VAR4;
 wcsncpy(VAR2, VAR3, wcslen(VAR3) + 1);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
