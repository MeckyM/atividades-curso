function VerificaIdade(){

    //solicita idade
    let idade = prompt("informe sua idade:");

    idade = Number(idade);

    //verifica se a idade é valida
    const mensagem = isNaN(idade)
    ?"porfavor, insira um número válido"
    : idade < 18
    ?"você é menor"
    :"você é maior";

    alert(mensagem);
}

VerificaIdade();