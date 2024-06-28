#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 fscanf(stdin, "", &VAR2);
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN5(VAR3);
 delete [] VAR3;
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
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 fscanf(stdin, "", &VAR2);
 }
 if(FUN2())
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN5(VAR3);
 delete [] VAR3;
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
 size_t VAR2;
 VAR2 = 0;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN5(VAR3);
 delete [] VAR3;
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN8()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN5(VAR3);
 delete [] VAR3;
 }
 else
 {
 FUN4("");
 }
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
