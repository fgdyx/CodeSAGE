#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 VAR5* VAR6 = new VAR7;
 VAR6->FUN3(VAR2);
 delete VAR6;
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 VAR5* VAR6 = new VAR8;
 VAR6->FUN3(VAR2);
 delete VAR6;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
