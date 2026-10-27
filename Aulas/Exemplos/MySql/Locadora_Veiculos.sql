DROP DATABASE IF EXISTS LocadoraVeiculos;
CREATE DATABASE LocadoraVeiculos;
USE LocadoraVeiculos;

CREATE TABLE Marca (

	Marca_Id   INT,
    Marca_Nome VARCHAR(30) NOT NULL,
		
	CONSTRAINT PrimaryKey_Marca PRIMARY KEY (Marca_Id)

);

CREATE TABLE Modelo (

	Modelo_Id              INT,
    Modelo_Nome            VARCHAR(30) NOT NULL,
    Modelo_Data_Lancamento DATE        NOT NULL,
    
    CONSTRAINT PrimaryKey_Modelo PRIMARY KEY (Modelo_Id),
    
    CONSTRAINT Lancamento_Modelo CHECK       (Modelo_Data_Lancamento >= '1950-01-01')
    
);

CREATE TABLE Marca_Modelo (

	Marca_Modelo_Id INT,
    FK_Marca        INT NOT NULL,
    FK_Modelo       INT NOT NULL,
    
    CONSTRAINT PrimaryKey_Marca_Modelo PRIMARY KEY (Marca_Modelo_Id),
    
    CONSTRAINT ForeignKey_Marca        FOREIGN KEY (FK_Marca)  REFERENCES Marca(Marca_Id),
    
    CONSTRAINT ForeignKey_Modelo       FOREIGN KEY (FK_Modelo) REFERENCES Modelo(Modelo_Id)
    
);


CREATE TABLE Carro (

	Carro_Id 	        INT,
    Carro_Placa         VARCHAR(8)  NOT NULL,
    Carro_Marca_Modelo  INT         NOT NULL,
    Carro_Cor           VARCHAR(15) NOT NULL,
    
    CONSTRAINT   PrimaryKey_Carro        PRIMARY KEY (Carro_Id),
    
    CONSTRAINT   ForeignKey_Marca_Modelo FOREIGN KEY (Carro_Marca_Modelo) REFERENCES Marca_Modelo(Marca_Modelo_Id),
    
    CONSTRAINT   Unique_Carro            UNIQUE      (Carro_Placa)
    
);