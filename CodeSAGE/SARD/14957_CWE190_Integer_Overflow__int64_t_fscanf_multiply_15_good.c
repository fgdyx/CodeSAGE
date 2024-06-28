#ifndef VAR1
static void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 switch(6)
 {
 case 6:
 fscanf (stdin, "", &VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN2("");
 break;
 default:
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR3/2))
 {
 int64_t VAR4 = VAR2 * 2;
 FUN3(VAR4);
 }
 else
 {
 FUN2("");
 }
 }
 break;
 }
}
static void FUN4()
{
 int64_t VAR2;
 VAR2 = 0LL;
 switch(6)
 {
 case 6:
 fscanf (stdin, "", &VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR3/2))
 {
 int64_t VAR4 = VAR2 * 2;
 FUN3(VAR4);
 }
 else
 {
 FUN2("");
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN5()
{
 int64_t VAR2;
 VAR2 = 0LL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = 2;
 break;
 }
 switch(7)
 {
 case 7:
 if(VAR2 > 0)
 {
 int64_t VAR4 = VAR2 * 2;
 FUN3(VAR4);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 int64_t VAR2;
 VAR2 = 0LL;
 switch(6)
 {
 case 6:
 VAR2 = 2;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 if(VAR2 > 0)
 {
 int64_t VAR4 = VAR2 * 2;
 FUN3(VAR4);
 }
 break;
 default:
 FUN2("");
 break;
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
