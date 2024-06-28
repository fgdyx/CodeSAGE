#ifndef VAR1
static VAR2 FUN1(size_t VAR3)
{
 VAR3 = 20;
 return VAR3;
}
static void FUN2()
{
 size_t VAR3;
 VAR3 = 0;
 VAR3 = FUN1(VAR3);
 {
 wchar_t * VAR4;
 if (VAR3 > wcslen(VAR5))
 {
 VAR4 = new wchar_t[VAR3];
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN4("");
 }
 }
}
static VAR2 FUN5(size_t VAR3)
{
 fscanf(stdin, "", &VAR3);
 return VAR3;
}
static void FUN6()
{
 size_t VAR3;
 VAR3 = 0;
 VAR3 = FUN5(VAR3);
 {
 wchar_t * VAR4;
 if (VAR3 > wcslen(VAR5) && VAR3 < 100)
 {
 VAR4 = new wchar_t[VAR3];
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
