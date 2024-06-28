#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(FUN2())
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 {
 char VAR5[10] = "";
 int VAR6;
 VAR6 = FUN5(VAR7, VAR8, VAR2, -1, VAR5, 0, 0, 0);
 if (VAR6 < 10)
 {
 FUN5(VAR7, VAR8, VAR2, -1, VAR5, VAR6 , 0, 0);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(FUN2())
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN2())
 {
 {
 char VAR5[10] = "";
 int VAR6;
 VAR6 = FUN5(VAR7, VAR8, VAR2, -1, VAR5, 0, 0, 0);
 if (VAR6 < 10)
 {
 FUN5(VAR7, VAR8, VAR2, -1, VAR5, VAR6 , 0, 0);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN2())
 {
 {
 char VAR5[10] = "";
 int VAR6;
 VAR6 = FUN5(VAR7, VAR8, VAR2, -1, VAR5, 0, 0, 0);
 FUN5(VAR7, VAR8, VAR2, -1, VAR5, VAR6 , 0, 0);
 }
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(FUN2())
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN2())
 {
 {
 char VAR5[10] = "";
 int VAR6;
 VAR6 = FUN5(VAR7, VAR8, VAR2, -1, VAR5, 0, 0, 0);
 FUN5(VAR7, VAR8, VAR2, -1, VAR5, VAR6 , 0, 0);
 }
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
