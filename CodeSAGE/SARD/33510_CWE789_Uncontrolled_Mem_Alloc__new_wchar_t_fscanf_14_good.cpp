#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t * VAR4;
 if (VAR2 > wcslen(VAR5) && VAR2 < 100)
 {
 VAR4 = new wchar_t[VAR2];
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
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
 if(VAR3==5)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(VAR3==5)
 {
 {
 wchar_t * VAR4;
 if (VAR2 > wcslen(VAR5) && VAR2 < 100)
 {
 VAR4 = new wchar_t[VAR2];
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
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
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 {
 wchar_t * VAR4;
 if (VAR2 > wcslen(VAR5))
 {
 VAR4 = new wchar_t[VAR2];
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
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
 if(VAR3==5)
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 {
 wchar_t * VAR4;
 if (VAR2 > wcslen(VAR5))
 {
 VAR4 = new wchar_t[VAR2];
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
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
