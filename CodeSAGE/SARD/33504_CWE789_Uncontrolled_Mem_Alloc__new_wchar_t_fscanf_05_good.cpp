#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6) && VAR2 < 100)
 {
 VAR5 = new wchar_t[VAR2];
 wcscpy(VAR5, VAR6);
 FUN3(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(VAR3)
 {
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6) && VAR2 < 100)
 {
 VAR5 = new wchar_t[VAR2];
 wcscpy(VAR5, VAR6);
 FUN3(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN5()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3)
 {
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6))
 {
 VAR5 = new wchar_t[VAR2];
 wcscpy(VAR5, VAR6);
 FUN3(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN6()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = 20;
 }
 if(VAR3)
 {
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6))
 {
 VAR5 = new wchar_t[VAR2];
 wcscpy(VAR5, VAR6);
 FUN3(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
