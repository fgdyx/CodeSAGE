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
 size_t VAR5, VAR6;
 VAR6 = wcslen(VAR3);
 for (VAR5 = 0; VAR5 < VAR6 + 1; VAR5++)
 {
 VAR2[VAR5] = VAR3[VAR5];
 }
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
