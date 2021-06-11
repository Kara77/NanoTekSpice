# NanoTekSpice - C++ Epitech project

Simulation of a circuit of electronic components using a nts configuration file


## Components:

Input / Clock / True / False
Output
Components(4001, 4008, 4011...) 


## Exemple of a configuration file:

```
. chipsets :
input i0
input i1
input i2
4081 and0
output out
. links :
i0 :1 and0 :1
i1 :1 and0 :2
and0 :3 and0 :5
i2 :1 and0 :6
and0 :4 out :1
```


## Execution:

```
$make
$./nanotekspice <file_name> [<input=value> ...]
```


## Commands

Simulate: Simulate a tick of the circuit

Exit: Close properly the program
