#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 wchar_t VAR4[] = VAR5"";
 VAR2 = FUN2(VAR4);
 }
 goto VAR6;
VAR6:
 free(VAR2);
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new wchar_t[100];
 goto VAR6;
VAR6:
 delete [] VAR2;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
