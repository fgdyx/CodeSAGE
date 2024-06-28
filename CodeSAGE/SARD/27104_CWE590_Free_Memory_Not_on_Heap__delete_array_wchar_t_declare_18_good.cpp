#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 wchar_t * VAR4 = new wchar_t[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 }
 FUN2(VAR2);
 delete [] VAR2;
}
void FUN3()
{
 FUN1();
}
#endif
