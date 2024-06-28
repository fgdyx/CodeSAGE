#ifndef VAR1
static void FUN1(size_t VAR2)
{
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN2(VAR3);
 delete [] VAR3;
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 size_t VAR2;
 void (*VAR5) (VAR6) = VAR7;
 VAR2 = 0;
 VAR2 = 20;
 FUN5(VAR2);
}
static void FUN6(size_t VAR2)
{
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN2(VAR3);
 delete [] VAR3;
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN7()
{
 size_t VAR2;
 void (*VAR5) (VAR6) = VAR8;
 VAR2 = 0;
 fscanf(stdin, "", &VAR2);
 FUN5(VAR2);
}
void FUN8()
{
 FUN4();
 FUN7();
}
#endif
