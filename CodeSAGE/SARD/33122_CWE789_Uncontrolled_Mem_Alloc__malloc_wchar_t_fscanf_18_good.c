#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 goto VAR3;
VAR3:
 fscanf(stdin, "", &VAR2);
 goto VAR4;
VAR4:
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6) && VAR2 < 100)
 {
 VAR5 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
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
 VAR2 = 0;
 goto VAR3;
VAR3:
 VAR2 = 20;
 goto VAR4;
VAR4:
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6))
 {
 VAR5 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
