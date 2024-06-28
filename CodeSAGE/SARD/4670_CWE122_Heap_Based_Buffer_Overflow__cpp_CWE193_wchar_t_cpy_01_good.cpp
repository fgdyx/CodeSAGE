#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[10+1];
 {
 wchar_t VAR3[10+1] = VAR4;
 wcscpy(VAR2, VAR3);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
