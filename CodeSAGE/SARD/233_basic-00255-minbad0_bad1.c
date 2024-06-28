int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 char VAR4[10];
 VAR1 = 0;
 VAR2 = 10 - (10 - 1);
 VAR3 = VAR1;
 for( ; ; )
 {
 if (VAR3 > 10) break;
 /* BAD */
 VAR4[VAR3] = '';
 VAR3 += VAR2;
 }
 return 0;
}
