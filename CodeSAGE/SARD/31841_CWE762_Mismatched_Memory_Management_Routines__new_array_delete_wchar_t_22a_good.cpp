#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(wchar_t * VAR5);
static void FUN2()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = new wchar_t[100];
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN3(wchar_t * VAR5);
static void FUN4()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = new wchar_t[100];
 VAR3 = 1;
 FUN3(VAR5);
}
void FUN5(wchar_t * VAR5);
static void FUN6()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = new wchar_t;
 VAR4 = 1;
 FUN5(VAR5);
}
void FUN7()
{
 FUN2();
 FUN4();
 FUN6();
}
#endif
