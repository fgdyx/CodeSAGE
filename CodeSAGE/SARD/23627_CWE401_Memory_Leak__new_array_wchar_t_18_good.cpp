#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 goto VAR5;
VAR5:
 delete[] VAR2;
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 wchar_t VAR6[100];
 VAR2 = VAR6;
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 goto VAR5;
VAR5:
 ;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
