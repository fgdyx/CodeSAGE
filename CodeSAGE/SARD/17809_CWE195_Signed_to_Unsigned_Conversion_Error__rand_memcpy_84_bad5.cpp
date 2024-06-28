#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR6 = FUN2();
}
VAR4::~FUN1()
{
 {
 char VAR7[100];
 char VAR8[100] = "";
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 if (VAR6 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign conversion could result in a very large number */
 memcpy(VAR8, VAR7, VAR6);
 VAR8[VAR6] = '';
 }
 FUN3(VAR8);
 }
}
}
#endif
