#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(1)
 {
 VAR2 = rand();
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 delete [] VAR3;
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
 if(1)
 {
 VAR2 = rand();
 }
 if(1)
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 delete [] VAR3;
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
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 20;
 }
 if(1)
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 delete [] VAR3;
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
 if(1)
 {
 VAR2 = 20;
 }
 if(1)
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = new wchar_t[VAR2];
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 delete [] VAR3;
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
